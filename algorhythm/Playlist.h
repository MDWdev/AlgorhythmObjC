//
//  Playlist.h
//  algorhythm
//
//  Created by Melissa on 12/8/15.
//  Copyright © 2015 Melissa Webster. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtist;
@property (strong, nonatomic) UIColor *backgroundColor;

- (instancetype)initWithIndex:(NSUInteger)index;

@end
