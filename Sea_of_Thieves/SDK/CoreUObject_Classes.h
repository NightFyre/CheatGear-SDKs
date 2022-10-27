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
	 * Class CoreUObject.Object
	 * Size -> 0x0028
	 */
	class UObject
	{
	public:
		static class TUObjectArray*                                GObjects;                                                // 0x0000(0x0008) PREDEFINED PROPERTY
		void*                                                      VfTable;                                                 // 0x0000(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    Flags;                                                   // 0x0008(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    InternalIndex;                                           // 0x000C(0x0004) PRE-DEFINED PROPERTY
		class UClass*                                              Class;                                                   // 0x0010(0x0008) PRE-DEFINED PROPERTY
		FName                                                      Name;                                                    // 0x0018(0x0008) PRE-DEFINED PROPERTY
		class UObject*                                             Outer;                                                   // 0x0020(0x0008) PRE-DEFINED PROPERTY

	public:
		static TUObjectArray& GetGlobalObjects();
		std::string GetName() const;
		std::string GetFullName() const;
		template<typename T>
		static T* FindObject(const std::string& name)
		{
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static T* FindObject()
		{
			auto v = T::StaticClass();
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static std::vector<T*> FindObjects(const std::string& name)
		{
			std::vector<T*> ret;
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		template<typename T>
		static std::vector<T*> FindObjects()
		{
			std::vector<T*> ret;
			auto v = T::StaticClass();
			for (int i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		static UClass* FindClass(const std::string& name);
		template<typename T>
		static T* GetObjectCasted(size_t index)
		{
			return static_cast<T*>(UObject::GetGlobalObjects().GetByIndex(index));
		}

		bool IsA(UClass* cmp) const;
		void ExecuteUbergraph(int32_t EntryPoint);
		void ProcessEvent(class UFunction* function, void* parms);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Interface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.GCObjectReferencer
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGCObjectReferencer : public UObject
	{
	public:
		unsigned char                                              UnknownData_RI5D[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextBuffer
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTextBuffer : public UObject
	{
	public:
		unsigned char                                              UnknownData_LGLD[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Field
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UField : public UObject
	{
	public:
		class UField*                                              Next;                                                    // 0x0028(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Struct
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UStruct : public UField
	{
	public:
		class UStruct*                                             SuperField;                                              // 0x0030(0x0008) PRE-DEFINED PROPERTY
		class UField*                                              Children;                                                // 0x0038(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    PropertySize;                                            // 0x0040(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    MinAlignment;                                            // 0x0044(0x0004) PRE-DEFINED PROPERTY
		unsigned char                                              pad_PSO03SFCW2[0x40];                                    // 0x0048(0x0040) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ScriptStruct
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UScriptStruct : public UStruct
	{
	public:
		unsigned char                                              UnknownData_P4XN[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Package
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UPackage : public UObject
	{
	public:
		unsigned char                                              UnknownData_42PA[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Class
	 * Size -> 0x0138 (FullSize[0x01C0] - InheritedSize[0x0088])
	 */
	class UClass : public UStruct
	{
	public:
		unsigned char                                              UnknownData_SLBW[0x138];                                 // 0x0088(0x0138) MISSED OFFSET (PADDING)

	public:
		template<typename T>
		T* CreateDefaultObjectOfType()
		{
			return static_cast<T*>(CreateDefaultObject());
		}

		UObject* CreateDefaultObject();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Function
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UFunction : public UStruct
	{
	public:
		int32_t                                                    FunctionFlags;                                           // 0x0088(0x0004) PRE-DEFINED PROPERTY
		uint16_t                                                   RepOffset;                                               // 0x008C(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   NumParms;                                                // 0x008E(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   ParmsSize;                                               // 0x0090(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   ReturnValueOffset;                                       // 0x0092(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCId;                                                   // 0x0094(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCResponseId;                                           // 0x0096(0x0002) PRE-DEFINED PROPERTY
		class UProperty*                                           FirstPropertyToInit;                                     // 0x0098(0x0008) PRE-DEFINED PROPERTY
		class UFunction*                                           EventGraphFunction;                                      // 0x00A0(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    EventGraphCallOffset;                                    // 0x00A8(0x0004) PRE-DEFINED PROPERTY
		unsigned char                                              pad_63X9JCN6VU[0x04];                                    // 0x00AC(0x0004) PRE-DEFINED PROPERTY
		void*                                                      Func;                                                    // 0x00B0(0x0008) PRE-DEFINED PROPERTY
		unsigned char                                              pad_GW7J8YJIMF[0x8];                                     // 0x00B8(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateFunction
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDelegateFunction : public UFunction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SparseDelegateFunction
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class USparseDelegateFunction : public UDelegateFunction
	{
	public:
		unsigned char                                              UnknownData_CDH3[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PackageMap
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPackageMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_9R7Y[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Enum
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UEnum : public UField
	{
	public:
		unsigned char                                              UnknownData_T2GG[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderClass
	 * Size -> 0x0150 (FullSize[0x0310] - InheritedSize[0x01C0])
	 */
	class ULinkerPlaceholderClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_G35T[0x150];                                 // 0x01C0(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderExportObject
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class ULinkerPlaceholderExportObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_GCR1[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderFunction
	 * Size -> 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
	 */
	class ULinkerPlaceholderFunction : public UFunction
	{
	public:
		unsigned char                                              UnknownData_9015[0x150];                                 // 0x00B8(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MetaData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMetaData : public UObject
	{
	public:
		unsigned char                                              UnknownData_M1T8[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectRedirector
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectRedirector : public UObject
	{
	public:
		unsigned char                                              UnknownData_S8L1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Property
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UProperty : public UField
	{
	public:
		unsigned char                                              UnknownData_RRGG[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NumericProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNumericProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ArrayProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UArrayProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_9780[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectPropertyBase
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UObjectPropertyBase : public UProperty
	{
	public:
		unsigned char                                              UnknownData_DIJS[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.AssetObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UAssetObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.AssetClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UAssetClassProperty : public UAssetObjectProperty
	{
	public:
		unsigned char                                              UnknownData_JGZF[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.BoolProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBoolProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_SDVF[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ByteProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UByteProperty : public UNumericProperty
	{
	public:
		unsigned char                                              UnknownData_DYQ9[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UClassProperty : public UObjectProperty
	{
	public:
		unsigned char                                              UnknownData_O1EK[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDelegateProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DoubleProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDoubleProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.FloatProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFloatProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.IntProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UIntProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int8Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt8Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.InterfaceProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UInterfaceProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_8NRY[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LazyObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class ULazyObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MapProperty
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UMapProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_ZET4[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegateProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UMulticastDelegateProperty : public UDelegateProperty
	{
	public:
		unsigned char                                              UnknownData_0ZFY[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastInlineDelegateProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NameProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNameProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StrProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UStrProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StructProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UStructProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_XE56[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt32Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt32Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.WeakObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UWeakObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTextProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
