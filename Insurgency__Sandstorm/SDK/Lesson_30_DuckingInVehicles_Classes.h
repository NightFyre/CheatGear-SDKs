#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass Lesson_30_DuckingInVehicles.Lesson_30_DuckingInVehicles_C
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	class ULesson_30_DuckingInVehicles_C : public UTutorialLesson
	{
	public:
		int32_t                                                    TotalSeatEntries;                                        // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TP37[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSBasePlayerController*                            K2Node_Event_NewOwningPlayerController;                  // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     K2Node_Event_NewPlayer;                                  // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor;                           // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               K2Node_CustomEvent_NewSeat;                              // 0x0108(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0110(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UVehicleSeatComponent*>                       CallFunc_GetSeatComponents_OutSeatComponents;            // 0x0120(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x0130(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOP4[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnNewSeat(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf);
		void BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf);
		void OnNewSeatDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
