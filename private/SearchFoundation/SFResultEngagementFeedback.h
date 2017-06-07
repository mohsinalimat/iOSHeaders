//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFResultFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying>
{
    _Bool _actionEngaged;
    unsigned long long _triggerEvent;
    unsigned long long _destination;
    unsigned long long _actionTarget;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) _Bool actionEngaged; // @synthesize actionEngaged=_actionEngaged;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3;
- (id)initWithResult:(id)arg1 actionEngaged:(_Bool)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4;

@end

