#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MeshMorpherRuntime.EMeshMorpherBakeBranches
	 */
	enum class EMeshMorpherBakeBranches : uint8_t
	{
		OnStart    = 0,
		OnComplete = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MeshMorpherRuntime.MeshMorpherWorkerRef
	 * Size -> 0x0010
	 */
	struct FMeshMorpherWorkerRef
	{
	public:
		unsigned char                                              UnknownData_M0NX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
