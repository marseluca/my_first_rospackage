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
![photo_2023-10-15_20-46-48](https://github.com/marseluca/my_first_rospackage/assets/33966986/7ab52e67-3e9f-443a-8e9c-0050a2f901ee)
