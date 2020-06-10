# Drawworks Multi-domain Simscape Simulation

A drawworks is a piece of heavy equipment used in the oil and gas industry
for drilling applications. The variable frequency drive (VFD) is used to 
raise and lower drill string and the top drive during the drilling process.

[![View Drawworks Electro-Mechanical Simulation for Oil/Gas Applicat on File Exchange](https://www.mathworks.com/matlabcentral/images/matlab-file-exchange.svg)](https://www.mathworks.com/matlabcentral/fileexchange/64941-drawworks-electro-mechanical-simulation-for-oil-gas-applicat)

This simulation can be used for actuator sizing and for Hardware-in-the-loop
simulations. Feel free to add and remove blocks as necessary.

Included models:
- drawWorks_Sim.slx - this model has a Simscape Power Systems
    higher fidelity model of the VFD.
- The Additional_Examples folder has many other examples used in the Video Series on various topics
- Under the "Additional_Examples/FlexiblePulley_LegacyVersion", you can find the classic Drawworks implementation

## Getting Started:

To run this example:
1) Open the *.slx model.
2) The model should add the "CAD_Files" folder to the MATLAB path. If not, right click on these directories and add to
    the path manually.
3) Run the model to see the dynamic response.
