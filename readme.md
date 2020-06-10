# Drawworks Multi-domain Simscape Simulation

A drawworks is a piece of heavy equipment used in the oil and gas industry
for drilling applications. The variable frequency drive (VFD) is used to 
raise and lower drill string and the top drive during the drilling process.

[![View Drawworks Electro-Mechanical Simulation for Oil/Gas Applicat on File Exchange](https://www.mathworks.com/matlabcentral/images/matlab-file-exchange.svg)](https://www.mathworks.com/matlabcentral/fileexchange/64941-drawworks-electro-mechanical-simulation-for-oil-gas-applicat)

This simulation can be used for actuator sizing and for Hardware-in-the-loop
simulations. Feel free to add and remove blocks as necessary.

Included models:
- drawWorks_Sim_DriveBlk.slx - this model has a Simscape Power Systems
    higher fidelity model of the VFD.
- drawWorks_Sim_GenericDrive.slx - this model has a simple drive model with
    torque/speed limits, but no electric power modeling

## Getting Started:

To run this example:
1) Open either *.slx model.
2) The model should add the "Image" directory and "Simscape_Pulley_Library"
    to the MATLAB path. If not, right click on these directories and add to
    the path manually.
3) Run the models to see the dynamic response.
4) It might be required to rebuild the Simscape library for the traveling
    pulleys in older releases. Use the "ssc_build" command:
    https://www.mathworks.com/help/physmod/simscape/ref/ssc_build.html
