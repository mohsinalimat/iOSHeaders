//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUClampValueFilter.h>

@interface PUSoftClampValueFilter : PUClampValueFilter
{
    double _resistance;
}

+ (id)scrollViewFilter;
@property(nonatomic) double resistance; // @synthesize resistance=_resistance;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
