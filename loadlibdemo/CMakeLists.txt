unset(source_files)

set(srcdirs
	./
  )
  
set(CMAKE_INSTALL_PREFIX "$ENV{NUTHOME}")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
ADD_DEFINITIONS(-DJSON_IS_AMALGAMATION)

foreach(srcdir ${srcdirs})
  include_directories(${srcdir})
  aux_source_directory(${srcdir} source_files)
endforeach()


###兼容舊版本,生成靜態庫
add_executable(demouse ${source_files})
target_link_libraries(demouse dl)
