#ifndef QHULLWRAPPER_HULLFACE_1640345352031_H
#define QHULLWRAPPER_HULLFACE_1640345352031_H
#include "qhullWrapper/interface.h"
#include "trimesh2/TriMesh.h"
#include <functional>
#include <vector>

typedef std::shared_ptr<trimesh::TriMesh> HMeshPtr;

namespace trimesh
{
	class TriMesh;
}

namespace qhullWrapper
{
	QHULLWRAPPER_API std::vector<trimesh::TriMesh*> hullFacesFromConvexMesh(trimesh::TriMesh* mesh);
	QHULLWRAPPER_API std::vector<trimesh::TriMesh*> hullFacesFromMesh(trimesh::TriMesh* mesh);
    struct HullFace {
        HMeshPtr mesh;
        trimesh::vec3 normal;
    };

    QHULLWRAPPER_API void hullFacesFromConvexMesh(trimesh::TriMesh* convexMesh, std::vector<HullFace>& hFaces);
}

#endif // QHULLWRAPPER_HULLFACE_1640345352031_H