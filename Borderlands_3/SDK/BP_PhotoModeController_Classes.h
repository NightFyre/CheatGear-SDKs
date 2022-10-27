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
	 * BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C
	 * Size -> 0x0008 (FullSize[0x1778] - InheritedSize[0x1770])
	 */
	class ABP_PhotoModeController_C : public APhotoModeController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1770(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void OnEnterPhotoMode();
		void OnExitPhotoMode();
		void ExecuteUbergraph_BP_PhotoModeController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
