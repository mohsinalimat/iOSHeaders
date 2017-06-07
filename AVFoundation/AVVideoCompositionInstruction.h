//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVVideoCompositionInstruction-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>
#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVVideoCompositionInstructionInternal, NSArray, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>
{
    AVVideoCompositionInstructionInternal *_instruction;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(readonly, copy) NSString *description;
- (void)_setValuesFromDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setEnablePostProcessing:(_Bool)arg1;
@property(readonly, nonatomic) _Bool enablePostProcessing;
- (void)setLayerInstructions:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *layerInstructions;
- (void)setBackgroundColor:(struct CGColor *)arg1;
@property(readonly, retain, nonatomic) struct CGColor *backgroundColor;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) _Bool containsTweening;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) int passthroughTrackID;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
