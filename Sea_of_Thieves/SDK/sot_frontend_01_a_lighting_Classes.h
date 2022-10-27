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
	 * BlueprintGeneratedClass sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class Asot_frontend_01_a_lighting_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AMatineeActor*                                       LightingController_UniqueObjectNameForCooking_441630218_RefProperty; // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void LightingTestEvent();
		void ExecuteUbergraph_sot_frontend_01_a_lighting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
