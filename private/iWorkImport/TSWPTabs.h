//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing>
{
    NSMutableArray *_tabs;
}

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)tabs;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)insertTab:(id)arg1;
- (id)tabAfterPosition:(double)arg1;
- (id)tabAtPosition:(double)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)saveToArchive:(struct TabsArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TabsArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithTabs:(id)arg1;
- (id)init;

@end

