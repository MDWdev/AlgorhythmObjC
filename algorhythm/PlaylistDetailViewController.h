//
//  PlaylistDetailViewController.h
//  algorhythm
//
//  Created by Melissa on 12/8/15.
//  Copyright © 2015 Melissa Webster. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist;

@interface PlaylistDetailViewController : UIViewController

@property (strong, nonatomic) Playlist *playlist;

@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;
@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;
@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist0;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist1;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist2;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist3;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist4;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist5;



@end
