//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition *_addition;
    unsigned long long _fileID;
}

@property(retain) GSAddition *addition; // @synthesize addition=_addition;
- (void).cxx_destruct;
- (_Bool)isStillValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAddition:(id)arg1;

@end

