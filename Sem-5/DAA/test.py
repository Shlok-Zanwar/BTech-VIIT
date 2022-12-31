# The Singular values of following matrix is

import numpy as np
import matplotlib.pyplot as plt


A = np.array([[1.732, 2], [0, 3]])
print(A)
U, s, V = np.linalg.svd(A)
print(U)
print(s)
print(V)
print(np.dot(U, np.dot(np.diag(s), V)))

# Plot the singular values
plt.plot(s)
plt.show()


