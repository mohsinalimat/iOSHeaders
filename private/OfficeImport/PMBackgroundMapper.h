//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADBackground;

__attribute__((visibility("hidden")))
@interface PMBackgroundMapper : CMMapper
{
    OADBackground *mBackground;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadBackground:(id)arg1 parent:(id)arg2;
- (struct CGRect)slideRect;

@end

