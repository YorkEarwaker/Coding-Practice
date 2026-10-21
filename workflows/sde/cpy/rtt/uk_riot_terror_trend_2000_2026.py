import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
import numpy as np

# ─── Data (approximate annual incident counts, UK-wide incl. NI) ───
years = np.arange(2000, 2027)

# Riot incidents per year (from compiled lists: race, sectarian, protest, football, etc.)
riots = [2, 4, 1, 0, 2, 2, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 1, 1, 1, 2, 2]

# Terrorist incidents per year (carried-out, all ideologies, incl. NI dissidents)
terror = [30, 35, 32, 30, 30, 35, 32, 30, 30, 62,
          150, 100, 90, 90, 85, 75, 70, 60, 55, 66,
          30, 25, 25, 25, 15, 10, 5]

# ─── UK JTAC Threat Level periods (national) ───
# (start_year, end_year, level, color)
threat_periods = [
    (2000.0, 2009.5, 'SEVERE',      '#fde8e8'),
    (2009.5, 2010.0, 'SUBSTANTIAL', '#fff8e1'),
    (2010.0, 2019.75,'SEVERE',      '#fde8e8'),
    (2019.75,2020.8, 'SUBSTANTIAL', '#fff8e1'),
    (2020.8, 2021.1, 'SEVERE',      '#fde8e8'),
    (2021.1, 2021.9, 'SUBSTANTIAL', '#fff8e1'),
    (2021.9, 2022.1, 'SEVERE',      '#fde8e8'),
    (2022.1, 2026.3, 'SUBSTANTIAL', '#fff8e1'),
    (2026.3, 2027.0, 'SEVERE',      '#fde8e8'),
]

# Brief CRITICAL spikes (marked as thin red lines)
critical_dates = [2006.6, 2006.7, 2007.45, 2007.5, 2017.4, 2017.45, 2017.7, 2017.72]

# ─── Plot ───
fig, ax = plt.subplots(figsize=(16, 7))

# Background threat-level shading
for start, end, level, color in threat_periods:
    ax.axvspan(start, end, alpha=0.35, color=color, zorder=0)
    mid = (start + end) / 2
    ax.text(mid, ax.get_ylim()[1] * 0.97 if ax.get_ylim()[1] > 0 else 145,
            level, ha='center', va='top', fontsize=8, fontweight='bold',
            color='#666', zorder=5)

# Critical spikes
for d in critical_dates:
    ax.axvline(x=d, color='red', linewidth=0.8, alpha=0.5, linestyle='--', zorder=1)

# Trend lines
ax.plot(years, riots, 'o-', color='#e65100', linewidth=2, markersize=5,
        label='Riot incidents (UK-wide)', zorder=3)
ax.plot(years, terror, 's-', color='#1565c0', linewidth=2, markersize=5,
        label='Terrorist incidents (UK-wide)', zorder=3)

# Annotate major events
ax.annotate('7/7\n(52 killed)', xy=(2005, 35), xytext=(2005, 65),
            fontsize=8, ha='center', arrowprops=dict(arrowstyle='->', color='gray'))
ax.annotate('2011\nRiots', xy=(2011, 1), xytext=(2011, 20),
            fontsize=8, ha='center', arrowprops=dict(arrowstyle='->', color='gray'))
ax.annotate('2024\nRiots', xy=(2024, 1), xytext=(2024, 15),
            fontsize=8, ha='center', arrowprops=dict(arrowstyle='->', color='gray'))
ax.annotate('NI dissident\npeak', xy=(2010, 150), xytext=(2012, 155),
            fontsize=8, ha='center', arrowprops=dict(arrowstyle='->', color='gray'))

# Labels & formatting
ax.set_xlabel('Year', fontsize=11)
ax.set_ylabel('Incidents per year (severity proxy)', fontsize=11)
ax.set_title('UK Riots vs. Terrorist Incidents 2000–2026\n(Background = JTAC National Threat Level)', fontsize=13)
ax.set_xlim(1999.5, 2027)
ax.set_ylim(0, 165)
ax.legend(loc='upper right', fontsize=10)
ax.grid(axis='y', alpha=0.3)

# Legend for threat levels
patches = [mpatches.Patch(color='#fde8e8', alpha=0.5, label='SEVERE (attack highly likely)'),
           mpatches.Patch(color='#fff8e1', alpha=0.5, label='SUBSTANTIAL (attack likely)'),
           plt.Line2D([0], [0], color='red', linestyle='--', linewidth=0.8, label='CRITICAL (imminent)')]
ax.legend(handles=patches, loc='upper left', fontsize=8)

plt.tight_layout()
plt.savefig('uk_riots_terror_trends.png', dpi=150, bbox_inches='tight')
plt.show()   
