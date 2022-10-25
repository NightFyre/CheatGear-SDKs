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
	 * BlueprintGeneratedClass Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C
	 * Size -> 0x0008 (FullSize[0x09E0] - InheritedSize[0x09D8])
	 */
	class AProj_ATL_Tracker_Dart_C : public AProj_ATL_TrackerMaster_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void SingleTargetTag();
		void ExecuteUbergraph_Proj_ATL_Tracker_Dart(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
