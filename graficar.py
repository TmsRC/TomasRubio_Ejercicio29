import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

datos = np.loadtxt("datos.dat").T

plt.figure()
plt.plot(datos[0],np.linspace(0,6,601))
plt.savefig("resultados.png")

"""
fig = plt.figure()
ax = Axes3D(fig)
ax.plot_trisurf(datos[0],datos[1],datos[2])
ax.set_xlabel("Tiempo")
ax.set_ylabel("Posicion")
ax.set_zlabel("Desplazamiento")
plt.savefig("resultados.png")
"""
