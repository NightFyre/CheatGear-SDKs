#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class Asot_frontend_01_a_IPGLineUp_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASkeletalMeshActor*                                  shipSelect_CharMarker_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_RefProperty; // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void showPlayerMarker();
		void hidePlayerMarker();
		void ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
