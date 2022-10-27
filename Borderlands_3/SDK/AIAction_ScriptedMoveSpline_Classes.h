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
	 * AIActionBlueprintGeneratedClass AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UAIAction_ScriptedMoveSpline_C : public UAIAction_Priority
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AIAction_ScriptedMoveSpline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
