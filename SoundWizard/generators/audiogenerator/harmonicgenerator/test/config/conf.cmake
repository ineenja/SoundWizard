set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test/config)
set(DST_DIR ${TEST_OUTPUT_PATH})

add_custom_target(${PROJECT_NAME}_tconf 
        COMMAND ${CMAKE_COMMAND} -E copy ${SRC_DIR}/TestGenParams1.txt ${DST_DIR}/
)

add_dependencies(${PROJECT_NAME}_t ${PROJECT_NAME}_tconf)
