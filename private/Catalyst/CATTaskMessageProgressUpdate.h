//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage
{
    CATTaskProgress *_progress;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CATTaskProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 progress:(id)arg2;

@end
