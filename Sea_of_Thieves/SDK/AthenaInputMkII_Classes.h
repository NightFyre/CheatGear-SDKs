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
	 * Class AthenaInputMkII.AutoMoveInputComponent
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UAutoMoveInputComponent : public UInputComponent
	{
	public:
		unsigned char                                              UnknownData_NISE[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.AthenaCharacterBaseInputComponent
	 * Size -> 0x0128 (FullSize[0x0298] - InheritedSize[0x0170])
	 */
	class UAthenaCharacterBaseInputComponent : public UAutoMoveInputComponent
	{
	public:
		unsigned char                                              UnknownData_TSKQ[0x128];                                 // 0x0170(0x0128) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.AthenaCharacterBaseInputComponentWithInterference
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UAthenaCharacterBaseInputComponentWithInterference : public UAthenaCharacterBaseInputComponent
	{
	public:
		unsigned char                                              UnknownData_YVPQ[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.LookingAtWieldableInputComponent
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class ULookingAtWieldableInputComponent : public UAthenaCharacterBaseInputComponent
	{
	public:
		class AActor*                                              TargetWieldable;                                         // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.MovementInterferenceComponent
	 * Size -> 0x0070 (FullSize[0x01E0] - InheritedSize[0x0170])
	 */
	class UMovementInterferenceComponent : public UAutoMoveInputComponent
	{
	public:
		unsigned char                                              UnknownData_455Q[0x70];                                  // 0x0170(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.ClampedFreelookXAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UClampedFreelookXAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.ClampedFreelookYAnalogInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UClampedFreelookYAnalogInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.ClampedFreelookMouseXInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UClampedFreelookMouseXInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaInputMkII.ClampedFreelookMouseYInputId
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UClampedFreelookMouseYInputId : public UAnalogInputId
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
