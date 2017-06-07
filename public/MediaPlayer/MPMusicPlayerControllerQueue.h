//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSUUID;

@interface MPMusicPlayerControllerQueue : NSObject <NSSecureCoding, NSMutableCopying>
{
    NSMutableArray *_items;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mutableItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItems:(id)arg1 uuid:(id)arg2;

@end
