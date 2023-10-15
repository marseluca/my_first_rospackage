This is my first ROS package for the Robotics Lab course 22/23

<h2>Creating the subscriber</h2>
<ol>
  <li>I created the node "my_package_node_subcriber.cpp"</li>
  <li>I added the following two lines to the CMakeLists.txt file:</li>
</ol>

<code>add_executable(${PROJECT_NAME}_node_subscriber src/my_package_node_subscriber.cpp)</code>

<code>target_link_libraries(${PROJECT_NAME}_node_subscriber
    ${catkin_LIBRARIES}
  )</code>

<h2>Execution</h2>
![Alt text](https://github.com/marseluca/my_first_rospackage/blob/main/photo_2023-10-15_20-46-48.jpg)
