/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Static Fields
	// --------------------------------------------------
	TNameEntryArray*                                            FName::GNames = nullptr;                                 // 0x0000(0x0000)

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	/**
	 * Initialize SDK
	 */
	bool InitSdk(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset)
	{
		auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
		if (!mBaseAddress)
			return false;
		
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
		FName::GNames = reinterpret_cast<CG::TNameEntryArray*>(mBaseAddress + gNamesOffset);
		UWorld::GWorld = reinterpret_cast<CG::UWorld**>(mBaseAddress + gWorldOffset);
		
		return true;
	}

	/**
	 * Initialize SDK
	 */
	bool InitSdk()
	{
		return InitSdk(L"Borderlands3.exe", 0x69EBDB0, 0x69E71E8, 0x6B1C668);
	}

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.FString
	 * 		Flags  -> ()
	 */
	FString::FString()
	{

	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.FString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const wchar_t*                                     other
	 */
	FString::FString(const wchar_t* other)
	{
		_max = _count = *other ? static_cast<int32_t>(std::wcslen(other)) + 1 : 0;
		if (_count)
			_data = const_cast<wchar_t*>(other);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.wc_str
	 * 		Flags  -> ()
	 */
	const wchar_t* FString::wc_str() const
	{
		return _data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.c_str
	 * 		Flags  -> ()
	 */
	const char* FString::c_str() const
	{
		return (const char*)_data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.IsValid
	 * 		Flags  -> ()
	 */
	bool FString::IsValid() const
	{
		return _data != nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.ToString
	 * 		Flags  -> ()
	 */
	std::string FString::ToString() const
	{
		size_t length = std::wcslen(_data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(_data, _data + length, '?', &str[0]);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.ToStringW
	 * 		Flags  -> ()
	 */
	std::wstring FString::ToStringW() const
	{
		std::wstring str(_data);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FUObjectItem.IsUnreachable
	 * 		Flags  -> ()
	 */
	bool FUObjectItem::IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FUObjectItem.IsPendingKill
	 * 		Flags  -> ()
	 */
	bool FUObjectItem::IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Count
	 * 		Flags  -> ()
	 */
	int32_t TUObjectArray::Count() const
	{
		return NumElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Max
	 * 		Flags  -> ()
	 */
	int32_t TUObjectArray::Max() const
	{
		return MaxElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index
	 */
	bool TUObjectArray::IsValidIndex(int32_t Index) const
	{
		return Index < Count() && Index >= 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetObjectPtr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index
	 */
	FUObjectItem* TUObjectArray::GetObjectPtr(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		if (!IsValidIndex(Index)) return nullptr;
		if (ChunkIndex > NumChunks) return nullptr;
		if (Index > MaxElements) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;
		return Chunk + WithinChunkIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	UObject* TUObjectArray::GetByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return (*ItemPtr).Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetItemByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	FUObjectItem* TUObjectArray::GetItemByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return ItemPtr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	UObject* TUObjectArray::operator[](int32_t i)
	{
		return GetByIndex(i);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	const UObject* TUObjectArray::operator[](int32_t i) const
	{
		return GetByIndex(i);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetIndex
	 * 		Flags  -> ()
	 */
	const int32_t FNameEntry::GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.IsWide
	 * 		Flags  -> ()
	 */
	bool FNameEntry::IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetAnsiName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetAnsiName() const
	{
		return std::string(AnsiName);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetWideName
	 * 		Flags  -> ()
	 */
	std::wstring FNameEntry::GetWideName() const
	{
		return std::wstring(WideName);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetName() const
	{
		return GetAnsiName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 */
	FName::FName()
	{
		ComparisonIndex = 0;
		Number = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	FName::FName(int32_t i)
	{
		ComparisonIndex = i;
		Number = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const char*                                        nameToFind
	 */
	FName::FName(const char* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				ComparisonIndex = i;
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
				#endif
				return;
			}
		}
		
		#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetAnsiName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
				#endif
				return;
			}
		}
		#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
		#endif
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const wchar_t*                                     nameToFind
	 */
	FName::FName(const wchar_t* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				ComparisonIndex = i;
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
				#endif
				return;
			}
		}
		
		#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetWideName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
				#endif
				return;
			}
		}
		#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
		#endif
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetGlobalNames
	 * 		Flags  -> ()
	 */
	TNameEntryArray& FName::GetGlobalNames()
	{
		return *GNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetNameA
	 * 		Flags  -> ()
	 */
	std::string FName::GetNameA() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetNameW
	 * 		Flags  -> ()
	 */
	std::wstring FName::GetNameW() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetWideName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetName
	 * 		Flags  -> ()
	 */
	std::string FName::GetName() const
	{
		return GetNameA();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetObjectPtr
	 * 		Flags  -> ()
	 */
	UObject* FScriptInterface::GetObjectPtr() const
	{
		return ObjectPointer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetObjectRef
	 * 		Flags  -> ()
	 */
	UObject*& FScriptInterface::GetObjectRef()
	{
		return ObjectPointer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetInterface
	 * 		Flags  -> ()
	 */
	void* FScriptInterface::GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.Get
	 * 		Flags  -> ()
	 */
	wchar_t* FText::Get() const
	{
		return Data != nullptr ? Data->Name : nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.ToString
	 * 		Flags  -> ()
	 */
	std::string FText::ToString() const
	{
		wchar_t* name = Get();
		if (!name)
		    return "NOT FOUND";
		
		size_t length = std::wcslen(name);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(name, name + length, '?', &str[0]);
		
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.ToWString
	 * 		Flags  -> ()
	 */
	std::wstring FText::ToWString() const
	{
		wchar_t* name = Get();
		if (!name)
		    return L"NOT FOUND";
		
		std::wstring str(name);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.SerialNumbersMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FUObjectItem*                                      objectItem
	 */
	bool FWeakObjectPtr::SerialNumbersMatch(FUObjectItem* objectItem) const
	{
		return objectItem->SerialNumber == ObjectSerialNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.IsValid
	 * 		Flags  -> ()
	 */
	bool FWeakObjectPtr::IsValid() const
	{
		if (ObjectSerialNumber == 0 || ObjectIndex < 0)
			return false;
		
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (!ObjectItem)
			return false;
		
		if (!SerialNumbersMatch(ObjectItem))
			return false;
		
		return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.Get
	 * 		Flags  -> ()
	 */
	UObject* FWeakObjectPtr::Get() const
	{
		if (!IsValid())
			return nullptr;
		
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (!ObjectItem)
			return nullptr;
		
		return ObjectItem->Object;
	}

}


