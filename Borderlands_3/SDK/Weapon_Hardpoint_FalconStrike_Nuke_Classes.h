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
	 * BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C
	 * Size -> 0x0008 (FullSize[0x0AF8] - InheritedSize[0x0AF0])
	 */
	class AWeapon_Hardpoint_FalconStrike_Nuke_C : public AWeapon_Hardpoint_FalconStrike_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void InitAnimation(class UBPAnim_IronBear_FalconStrike_C* Anim);
		void K2_Initialize();
		void ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
