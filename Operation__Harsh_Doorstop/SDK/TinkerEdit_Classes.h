#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class TinkerEdit.TBEditableActorComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTBEditableActorComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerEdit.TBEditStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTBEditStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_PlayerHasValidEditComponent(class APlayerController* Player);
		bool STATIC_HasValidEditableComponent(class AActor* Actor);
		bool STATIC_FindValidPlayerEditComponent(class APlayerController* Player, class UTBPlayerEditComponent** PlayerEditComp);
		bool STATIC_FindValidEditableActorComponent(class AActor* Actor, class UTBEditableActorComponent** EditableActorComp);
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerEdit.TBEditWorldSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTBEditWorldSubsystem : public UWorldSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerEdit.TBPlayerEditComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UTBPlayerEditComponent : public UActorComponent
	{
	public:
		unsigned char                                              bEditingEnabled : 1;                                     // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I8DH[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetIsEditingEnabled(bool bIsEditingEnabled);
		bool OwnerHasAuthority();
		class APlayerController* GetOwningPlayer();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
