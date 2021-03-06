//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
}

@property(nonatomic) unsigned long long offFlags; // @synthesize offFlags=_offFlags;
@property(nonatomic) unsigned long long onFlags; // @synthesize onFlags=_onFlags;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;

@end

