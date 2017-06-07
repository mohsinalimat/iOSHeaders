//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>
#import <PhotoLibraryServices/NSFastEnumeration-Protocol.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    unsigned long long _formatVersion;
}

+ (_Bool)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)count;
- (id)maskUUIDs;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)adjustmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdjustments:(id)arg1;
- (id)init;
- (id)envelopeDictionary;
- (id)initWithEnvelopeDictionary:(id)arg1;

@end

