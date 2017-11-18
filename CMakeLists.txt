cmake_minimum_required( VERSION 3.0 )

project( testowanie )

option(APP_SETUP_GOOGLE_PROJECT "Setup the googletest subproject" ON)
option(APP_ENABLE_TESTING "Enable tests in the current project." ON)

add_subdirectory( projekt )

if (APP_SETUP_GOOGLE_PROJECT)
	execute_process( COMMAND ${PROJECT_SOURCE_DIR}/setup.sh
				 	 WORKING_DIRECTORY ${PROJECT_SOURCE_DIR} )
endif()

if (APP_ENABLE_TESTING)
	#add_subdirectory( googletest )
	add_subdirectory( test )
endif()
