#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CustomMeshComponent.CustomMeshComponent
	 * Size -> 0x0018 (FullSize[0x0730] - InheritedSize[0x0718])
	 */
	class UCustomMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_X6GO[0x8];                                   // 0x0718(0x0008) Fix Super Size
		unsigned char                                              UnknownData_G5QH[0x10];                                  // 0x0720(0x0010) MISSED OFFSET (PADDING)

	public:
		bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
