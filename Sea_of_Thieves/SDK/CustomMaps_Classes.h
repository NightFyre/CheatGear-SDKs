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
	 * Class CustomMaps.CustomMapDisplayObjectBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomMapDisplayObjectBase : public UObject
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0028(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMap
	 * Size -> 0x0030 (FullSize[0x0860] - InheritedSize[0x0830])
	 */
	class ACustomMap : public ARenderToTextureMapBase
	{
	public:
		unsigned char                                              UnknownData_G3HK[0x8];                                   // 0x0830(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x0838(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TArray<class UCustomMapDisplayObjectBase*>                 DisplayItems;                                            // 0x0840(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_JRAV[0x10];                                  // 0x0850(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_FontUpdated();
		void OnRep_DisplayItem();
		void OnMapItemsUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height);
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapCollectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomMapCollectionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapDataTypeBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomMapDataTypeBase : public UObject
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCustomMapData : public UDataAsset
	{
	public:
		class UClass*                                              CustomMapItemDescClass;                                  // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UFont*                                               Font;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UCustomMapDataTypeBase*>                      MapDisplayItemList;                                      // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapDataTypePositional
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UCustomMapDataTypePositional : public UCustomMapDataTypeBase
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Orientation;                                             // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J367[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapDisplayObjectPositional
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UCustomMapDisplayObjectPositional : public UCustomMapDisplayObjectBase
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0038(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Orientation;                                             // 0x0040(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_58X7[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapDisplayObjectText
	 * Size -> 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
	 */
	class UCustomMapDisplayObjectText : public UCustomMapDisplayObjectPositional
	{
	public:
		class FText                                                Text;                                                    // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH Net
		unsigned char                                              UnknownData_Q8OP[0x20];                                  // 0x0060(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      FontScale;                                               // 0x0080(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StrikeThrough;                                           // 0x0084(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P6EX[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrikethroughThickness;                                  // 0x0088(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RPK[0x4C];                                  // 0x008C(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapDataTypeText
	 * Size -> 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
	 */
	class UCustomMapDataTypeText : public UCustomMapDataTypePositional
	{
	public:
		class FText                                                Text;                                                    // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_EDJ9[0x20];                                  // 0x0060(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      FontScale;                                               // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StrikeThrough;                                           // 0x0084(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKFL[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrikethroughThickness;                                  // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9TVF[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CustomMaps.CustomMapSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCustomMapSettings : public UDeveloperSettings
	{
	public:
		class UClass*                                              CustomMapItemDescClass;                                  // 0x0038(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
