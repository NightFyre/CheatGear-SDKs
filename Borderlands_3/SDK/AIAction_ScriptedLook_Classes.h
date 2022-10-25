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
	 * AIActionBlueprintGeneratedClass AIAction_ScriptedLook.AIAction_ScriptedLook_C
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class UAIAction_ScriptedLook_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient
		struct FGbxBlackboardKeySelector                           LookAtTarget;                                            // 0x0150(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FGbxBlackboardKeySelector                           LookAtUseAim;                                            // 0x0160(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FGbxBlackboardKeySelector                           LookAtFireWeapon;                                        // 0x0170(0x0010) Edit, BlueprintVisible, NoDestructor

	public:
		void ExecuteUbergraph_AIAction_ScriptedLook(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
