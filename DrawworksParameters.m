%% Parameter Initialization for Drawworks
% Copyright 2015 - 2017 The MathWorks, Inc.

%% Simulation Time Step
Ts = 1.5e-4;        % SPS/Overall Simulation time step
Tssc = 10*Ts;       % Simscape simulation time step

%% Parameters for Drawworks
n = 6; % number of lines

%% Pulley
Pulley.radius = 0.75; % [m]
Pulley.inertia = 250; % [kg.m^2]
Pulley.viscous = 0.001; % [N.m/(rad/s)]
Pulley.friction = 0.02; % [N.m]
Pulley.mass = 10; % [kg]

%% Drum
Drum.inertia = 4000; % [kg.m^2]
Drum.radius = 0.25; % [m]
Drum.viscous = 0.001; % [N.m/(rad/s)]
Drum.friction = 0.02; % [N.m]

%% Load
Tackle.load = 100000; % [N]

%% Rope
Rope.stiffness = 1e7; % [N/m]
Rope.damping = 1e6; % [N/(m/s)]