from setuptools import find_packages
from setuptools import setup

setup(
    name='vier_gewinnt',
    version='0.0.0',
    packages=find_packages(
        include=('vier_gewinnt', 'vier_gewinnt.*')),
)
