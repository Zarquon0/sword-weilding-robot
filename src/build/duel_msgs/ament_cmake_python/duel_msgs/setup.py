from setuptools import find_packages
from setuptools import setup

setup(
    name='duel_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('duel_msgs', 'duel_msgs.*')),
)
