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
	 * BlueprintGeneratedClass BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBPContextResolver_PlayerInventory_C : public UAttributeContextResolver
	{
	public:
		TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
