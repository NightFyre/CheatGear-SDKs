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
	 * DynamicClass Lesson_33_PassengerSeat.Lesson_33_PassengerSeat_C
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class ULesson_33_PassengerSeat_C : public UTutorialLesson
	{
	public:
		int32_t                                                    TotalPassengerSeatEntries;                               // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLessonCompleted;                                        // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FD0[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x00F0(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AINSBasePlayerController*                            K2Node_Event_NewOwningPlayerController;                  // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSPlayerState*                                     K2Node_Event_NewPlayer;                                  // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor;                           // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               K2Node_CustomEvent_NewSeat;                              // 0x0118(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x0120(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXGT[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnNewSeatDelegate_Event_1(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf);
		void BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf);
		void OnNewSeatDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class UVehicleSeatComponent* bpp__NewSeat__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
