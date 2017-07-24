//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFAudio/NSSecureCoding-Protocol.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding>
{
    unsigned int _layoutTag;
    struct AudioChannelLayout *_layout;
    void *_reserved;
}

+ (_Bool)supportsSecureCoding;
+ (id)layoutWithLayout:(const struct AudioChannelLayout *)arg1;
+ (id)layoutWithLayoutTag:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)layoutSize;
@property(readonly, nonatomic) const struct AudioChannelLayout *layout;
@property(readonly, nonatomic) unsigned int layoutTag;
@property(readonly, nonatomic) unsigned int channelCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithLayout:(const struct AudioChannelLayout *)arg1;
- (id)initWithLayoutTag:(unsigned int)arg1;
- (id)init;

@end

