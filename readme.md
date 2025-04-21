## 🧊 3D Rubik's Cube Visualizer
The 3D Rubik’s Cube Visualizer is an interactive, OpenGL-based simulation built using C. It allows users to freely manipulate a virtual Rubik’s Cube within a 3D environment. With full 360-degree mouse control, key-mapped face rotations, customizable speed, and realistic lighting, this project offers a rich and immersive experience in computer graphics.

## Features
- 🌀 360° cube rotation using mouse

- 🎮 Face rotation via keyboard inputs

- ⚙️ Adjustable rotation speed

- 💡 Realistic lighting

- 🖥️ Smooth real-time rendering

## Demo

![Rubik's Cube Demo](https://github.com/Dipin-Adhikari/3D-Rubik-s-Cube-Visualizer/raw/master/demo/final%20rubik's%20cube%20demo.gif)


## Project Setup & Controls Guide
This project is built using Visual Studio 2022 with OpenGL (GLUT) support. It allows interactive manipulation of a 3D cube using keyboard and mouse.

### ✅ How to Run
- Open the solution in Visual Studio 2022

- Press Run (or Ctrl + F5) to build and launch the project

- Ensure OpenGL/GLUT libraries are correctly linked

- In case of linking errors, you may need to build the required libraries yourself.

### 🎮 Controls
#### 🖱️ Mouse Controls
- Left Click + Drag – Rotate the camera around the cube

- Right Click + Drag – Move the light source 

#### ⌨️ Keyboard Controls
 Cube Rotations:

- 🔁 A / Q – Rotate Layer 1 (Clockwise / Counterclockwise)

- 🔁 S / W – Rotate Layer 2

- 🔁 D / E – Rotate Layer 3

- 🔁 F / R – Rotate Layer 4

- 🔁 G / T – Rotate Layer 5

- 🔁 H / Y – Rotate Layer 6

#### Camera View Rotation:

- 🔼 2 / 🔽 8 – Tilt view Up / Down

- ▶️ 6 / ◀️ 4 – Tilt view Right / Left

- 🔄 9 / 1 – Rotate view Clockwise / Counterclockwise

- 🔁 5 – Reset camera view

#### ⏩ Speed Control:

- ⬆️ M – Increase rotation speed

- ⬇️ N – Decrease rotation speed

#### ↩️ Undo Moves:

- 🔙 O – Undo last cube rotation

### Libraries Used
- GLUT (OpenGL Utility Toolkit)

- stb_image




