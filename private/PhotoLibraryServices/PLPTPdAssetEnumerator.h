//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSFastEnumeration-Protocol.h>

@class NSArray, PLManagedObjectContext;
@protocol PLPTPConversionSupport;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration>
{
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    id <PLPTPConversionSupport> _conversionSupport;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;
- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (_Bool)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)getPTPdInfo:(id *)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDictionariesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;

@end

