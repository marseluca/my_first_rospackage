<h2>Creating the subscriber</h2>
<ol>
  <li>I created the node "my_package_node_subscriber.cpp"</li>
  <li>I added the following two lines to the CMakeLists.txt file:</li>
</ol>

<code>add_executable(${PROJECT_NAME}_node_subscriber src/my_package_node_subscriber.cpp)</code>

<code>target_link_libraries(${PROJECT_NAME}_node_subscriber
    ${catkin_LIBRARIES}
  )</code>
