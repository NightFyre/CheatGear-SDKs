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
	 * BlueprintGeneratedClass BPWeap_SR_JAK.BPWeap_SR_JAK_C
	 * Size -> 0x0008 (FullSize[0x0A08] - InheritedSize[0x0A00])
	 */
	class ABPWeap_SR_JAK_C : public ABPWeap_Jakobs_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A00(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void HideMag();
		void ShowAmmo();
		void HideAmmo();
		void Fire_Rotate();
		void RotationReset();
		void Notify_ReloadEnded(bool bCompleted);
		void ExecuteUbergraph_BPWeap_SR_JAK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
