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
	 * BlueprintGeneratedClass Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C
	 * Size -> 0x0008 (FullSize[0x0AB8] - InheritedSize[0x0AB0])
	 */
	class AProj_ATL_Tracker_Puck_Child_C : public AProj_ATL_Tracker_Puck_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SingleTargetTag();
		void ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
