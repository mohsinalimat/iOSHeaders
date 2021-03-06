//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionSwipeExports-Protocol.h>

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding>
{
    unsigned long long _direction;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)swipeActionWithLocation:(struct CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

