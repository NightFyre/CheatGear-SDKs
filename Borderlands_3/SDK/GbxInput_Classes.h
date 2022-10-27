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
	 * Class GbxInput.GbxInputAction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxInputAction : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputAction_ConsoleCommand
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxInputAction_ConsoleCommand : public UGbxInputAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionCollection
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxInputActionCollection : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGbxInputActionData : public UGbxDataAsset
	{
	public:
		class FName                                                ActionName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionData_Continuous_Vector
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UGbxInputActionData_Continuous_Vector : public UGbxInputActionData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionData_Discrete
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UGbxInputActionData_Discrete : public UGbxInputActionData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionEventInterpreter
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGbxInputActionEventInterpreter : public UObject
	{
	public:
		unsigned char                                              InterpreterClass[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxInput.GbxInputActionEventInterpreter.InterpreterClass

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionReceiverDelegateBinding
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxInputActionReceiverDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionReceiverDelegateBinding_Continuous_Vector
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxInputActionReceiverDelegateBinding_Continuous_Vector : public UGbxInputActionReceiverDelegateBinding
	{
	public:
		TArray<struct FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector> InputActionReceiverDelegateBindings;                     // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionReceiverDelegateBinding_Discrete
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxInputActionReceiverDelegateBinding_Discrete : public UGbxInputActionReceiverDelegateBinding
	{
	public:
		TArray<struct FBlueprintGbxInputActionReceiverDelegateBinding_Discrete> InputActionReceiverDelegateBindings;                     // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputActionReceiverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxInputActionReceiverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputComponent
	 * Size -> 0x00F0 (FullSize[0x02F0] - InheritedSize[0x0200])
	 */
	class UGbxInputComponent : public UInputComponent
	{
	public:
		unsigned char                                              UnknownData_MDCB[0x8];                                   // 0x0200(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UGbxInputKeyRebindData_Button*>    CommonInputMap;                                          // 0x0208(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxInputRebindCategory*                             RebindCategory;                                          // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxInputRebindContext*                              DefaultRebindContext;                                    // 0x0260(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxInputActionEventLookupList                      InputActionEventLookupList;                              // 0x0268(0x0010) DuplicateTransient, NativeAccessSpecifierPrivate
		class UGbxInputRebindContext*                              RebindContext;                                           // 0x0278(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V5MN[0x70];                                  // 0x0280(0x0070) MISSED OFFSET (PADDING)

	public:
		void StartInputConsumeKeyImpl();
		void StartInputAction_Discrete_Impl(class UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent);
		void InputAction_Continuous_Vector_Impl(class UGbxInputActionData_Continuous_Vector* AxisAction, const struct FVector& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputDevice
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UGbxInputDevice : public UGbxDataAsset
	{
	public:
		class FName                                                DeviceName;                                              // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputEventHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxInputEventHelpers : public UObject
	{
	public:
		void SigFunc_Button_PressPulse(float NextPulseDelay);
		void SigFunc_Axis(const struct FVector& Val);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputKeyRebindData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxInputKeyRebindData : public UDataAsset
	{
	public:
		class FName                                                RebindName;                                              // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxInputRebindPlatformSupportType                         PlatformSupportType;                                     // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L1RA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputKeyRebindData_Button
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGbxInputKeyRebindData_Button : public UGbxInputKeyRebindData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputKeyRebindData_Axis
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGbxInputKeyRebindData_Axis : public UGbxInputKeyRebindData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputRebindCategory
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UGbxInputRebindCategory : public UDataAsset
	{
	public:
		class FText                                                CategoryName;                                            // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FText                                                CategoryDescription;                                     // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UGbxInputRebindCategory*                             ParentCategory;                                          // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxInputRebindContext*                              DefaultContext;                                          // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxInputRebindContext
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGbxInputRebindContext : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_WJIO[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxInputRebindContext*                              ParentContext;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputRebind_Button>                      ButtonBindings;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGbxInputRebind_Axis>                        AxisBindings;                                            // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UGbxInputRebindContext*                              DefaultContext;                                          // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G8L8[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxInput.GbxPlayerInput
	 * Size -> 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
	 */
	class UGbxPlayerInput : public UPlayerInput
	{
	public:
		TArray<class UGbxInputRebindCategory*>                     Categories;                                              // 0x03C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TMap<class UGbxInputRebindCategory*, class UGbxInputRebindContext*> RebindCategoryToContext;                                 // 0x03D8(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
