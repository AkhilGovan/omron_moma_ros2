from setuptools import find_packages
from setuptools import setup

setup(
    name='om_aiv_msg',
    version='0.0.0',
    packages=find_packages(
        include=('om_aiv_msg', 'om_aiv_msg.*')),
)
