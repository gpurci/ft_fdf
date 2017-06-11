/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:31:56 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 10:00:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <mlx.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "gnl/get_next_line.h"
# define PI 3.14
# define PTR_MOTION (1L << 6)
# define MOTION_NOTIFY 6
# define KEY_PRESS_MASK (1L << 6)
# define KEY_RELEASE_MASK (1L << 1)
# define KEY_PRESS 2
# define KEY_RELEASE 3
# define ALB 0xFFFFFF
# define VERDE 0xFF00
# define ALBASTRU 0xFF

typedef enum {
	kVK_ANSI_A = 0x00,
	kVK_ANSI_S = 0x01,
	kVK_ANSI_D = 0x02,
	kVK_ANSI_F = 0x03,
	kVK_ANSI_H = 0x04,
	kVK_ANSI_G = 0x05,
	kVK_ANSI_Z = 0x06,
	kVK_ANSI_X = 0x07,
	kVK_ANSI_C = 0x08,
	kVK_ANSI_V = 0x09,
	kVK_ANSI_B = 0x0B,
	kVK_ANSI_Q = 0x0C,
	kVK_ANSI_W = 0x0D,
	kVK_ANSI_E = 0x0E,
	kVK_ANSI_R = 0x0F,
	kVK_ANSI_Y = 0x10,
	kVK_ANSI_T = 0x11,
	kVK_ANSI_1 = 0x12,
	kVK_ANSI_2 = 0x13,
	kVK_ANSI_3 = 0x14,
	kVK_ANSI_4 = 0x15,
	kVK_ANSI_6 = 0x16,
	kVK_ANSI_5 = 0x17,
	kVK_ANSI_Equal = 0x18,
	kVK_ANSI_9 = 0x19,
	kVK_ANSI_7 = 0x1A,
	kVK_ANSI_Minus = 0x1B,
	kVK_ANSI_8 = 0x1C,
	kVK_ANSI_0 = 0x1D,
	kVK_ANSI_RightBracket = 0x1E,
	kVK_ANSI_O = 0x1F,
	kVK_ANSI_U = 0x20,
	kVK_ANSI_LeftBracket = 0x21,
	kVK_ANSI_I = 0x22,
	kVK_ANSI_P = 0x23,
	kVK_ANSI_L = 0x25,
	kVK_ANSI_J = 0x26,
	kVK_ANSI_Quote = 0x27,
	kVK_ANSI_K = 0x28,
	kVK_ANSI_Semicolon = 0x29,
	kVK_ANSI_Backslash = 0x2A,
	kVK_ANSI_Comma = 0x2B,
	kVK_ANSI_Slash = 0x2C,
	kVK_ANSI_N = 0x2D,
	kVK_ANSI_M = 0x2E,
	kVK_ANSI_Period = 0x2F,
	kVK_ANSI_Grave = 0x32,
	kVK_ANSI_KeypadDecimal = 0x41,
	kVK_ANSI_KeypadMultiply = 0x43,
	kVK_ANSI_KeypadPlus = 0x45,
	kVK_ANSI_KeypadClear = 0x47,
	kVK_ANSI_KeypadDivide = 0x4B,
	kVK_ANSI_KeypadEnter = 0x24,
	kVK_ANSI_KeypadMinus = 0x4E,
	kVK_ANSI_KeypadEquals = 0x51,
	kVK_ANSI_Keypad0 = 0x52,
	kVK_ANSI_Keypad1 = 0x53,
	kVK_ANSI_Keypad2 = 0x54,
	kVK_ANSI_Keypad3 = 0x55,
	kVK_ANSI_Keypad4 = 0x56,
	kVK_ANSI_Keypad5 = 0x57,
	kVK_ANSI_Keypad6 = 0x58,
	kVK_ANSI_Keypad7 = 0x59,
	kVK_ANSI_Keypad8 = 0x5B,
	kVK_ANSI_Keypad9 = 0x5C
}	t_primar;
typedef enum {
	kVK_Reinit = 0x4C,
	kVK_Tab = 0x30,
	kVK_Space = 0x31,
	kVK_Backspace = 0x33,
	kVK_Escape = 0x35,
	kVK_Command = 0x37,
	kVK_Shift = 0x102,
	kVK_CapsLock = 0x110,
	kVK_Option = 0x3A,
	kVK_Control = 0x3B,
	kVK_RightShift = 0x3C,
	kVK_RightOption = 0x3D,
	kVK_RightControl = 0x3E,
	kVK_Function = 0x3F,
	kVK_F17 = 0x40,
	kVK_VolumeUp = 0x48,
	kVK_VolumeDown = 0x49,
	kVK_Mute = 0x4A,
	kVK_F18 = 0x4F,
	kVK_F19 = 0x50,
	kVK_F20 = 0x5A,
	kVK_F5 = 0x60,
	kVK_F6 = 0x61,
	kVK_F7 = 0x62,
	kVK_F3 = 0x63,
	kVK_F8 = 0x64,
	kVK_F9 = 0x65,
	kVK_F11 = 0x67,
	kVK_F13 = 0x69,
	kVK_F16 = 0x6A,
	kVK_F14 = 0x6B,
	kVK_F10 = 0x6D,
	kVK_F12 = 0x6F,
	kVK_F15 = 0x71,
	kVK_Help = 0x72,
	kVK_Home = 0x73,
	kVK_PageUp = 0x74,
	kVK_ForwardDelete = 0x75,
	kVK_F4 = 0x76,
	kVK_End = 0x77,
	kVK_F2 = 0x78,
	kVK_PageDown = 0x79,
	kVK_F1 = 0x7A,
	kVK_LeftArrow = 0x7B,
	kVK_RightArrow = 0x7C,
	kVK_DownArrow = 0x7D,
	kVK_UpArrow = 0x7E
}	t_optional;

typedef struct			s_fdf_coord
{
	int					x;
	int					y;
}						t_coord;

typedef struct			s_fdf_coord_init_fin
{
	t_coord				init;
	t_coord				final;
}						t_coord_init_fin;

typedef struct			s_fdf_double_coord
{
	double				x;
	double				y;
}						t_double_coord;

typedef struct			s_angle
{
	double				alfa;
	double				beta;
	double				gamma;
}						t_unghi;

typedef struct			s_patrulater
{
	t_coord				unu;
	t_coord				doi;
	t_coord				trei;
	t_coord				patru;
	int					color;
	int					scara;
	int					prime[6];
	int					sec[6];
}						t_patr;

typedef struct			s_td_coord_fdf
{
	int					x;
	int					y;
	int					z;
	int					color;
}						t_td_coord;

typedef	struct			s_d_coord
{
	t_coord				mv;
	t_double_coord		coord;
}						t_double_move;

typedef	struct			s_move
{
	t_coord				pas;
	t_coord				mv;
	t_coord				scale;
	t_coord				coord;
	char				flag;
	int					zoom;
	double				sc_angle;
	int					sc_z;
	int					sc_move;
	int					sc_zoom;
	int					sc_color;
}						t_move;

typedef	struct			s_string
{
	char				i;
	char				c[50];
	char				dir[30];
	t_coord				init;
}						t_string;

typedef	struct			s_ft_fdf
{
	char				button;
	char				key;
	char				flag;
	t_string			string;
	t_td_coord			**td;
	t_td_coord			**corp;
	t_patr				patrul;
	void				*mlx;
	void				*win;
	t_coord				len;
	t_coord				frame;
	t_move				move;
	int					scara;
	int					shift;
	t_unghi				angle;
}						t_fdf;

typedef	struct			s_funct
{
	void				(*f)(t_td_coord *td, double alfa);
}						t_func;

typedef struct			s_button_funct
{
	void				(*f)(t_fdf *mlw, t_coord *coord);
}						t_button_func;

typedef struct			s_comand_funct
{
	void				(*f)(t_fdf *mlw);
}						t_comand_func;

void					delete_memory_td(t_td_coord **td, t_coord *len);
void					cre_line(t_fdf *mlw);
void					af_t_patr(t_patr *init);
void					af_td_coord(t_td_coord **td, int x, int y);
void					init_t_fdf(t_fdf *mlw);
void					init_t_fdf_variable(t_fdf *mlw);
void					initializare_patrulater_nou(t_td_coord **td,
	t_patr *patrul, t_move *move, int j);
t_td_coord				**ft_initializare_coordonate_td(t_td_coord **td,
	char *nume, int linii, int max);
void					initializare_patrulater_orizontal(t_td_coord **td,
	t_patr *patrul, int j, int scara);
void					initializare_patrulater_vertical(t_td_coord **td,
	t_patr *patrul, int j, int scara);
void					init_function_scale_function_fdf(t_comand_func *scale);
void					init_comand_scale_function_fdf(char comand[6][10]);
void					init_comand_angle_function_fdf(char comand[4][10]);
void					init_comand_verificare_fdf(char comand[9][10]);
void					init_function_fdf(t_fdf *mlw);
void					init_function_comand_valid(t_comand_func *scale);
void					init_function_my_mouse_fun(t_button_func *scale);
void					init_t_button_func(t_button_func *scale);
char					reinit_patrulater(t_coord *init, t_coord *final,
	int *v);
void					reinit_frame(t_fdf *mlw);
void					reinit_zoom_fdf(t_fdf *mlw);
void					reinit_td_t_td_coord(t_fdf *mlw);
void					copy_t_td_coord(t_td_coord *dest, t_td_coord *src,
	int zoom);
void					reinit_t_td_coord_corp(t_fdf *mlw, t_coord *point);
void					reinit_move_mv(t_fdf *mlw, t_coord *aria,
	t_coord *scale);
void					reinit_move_for_one_coord(t_fdf *mlw, t_coord *aria,
	t_coord *scale);
int						*calcul_pas_pixel_line(t_coord *init, t_coord *final,
	int *v);
void					alfa_calcul(t_td_coord *td, double alfa);
void					beta_calcul(t_td_coord *td, double beta);
void					gamma_calcul(t_td_coord *td, double gamma);
void					rotire_matrici(t_fdf *mlw, double unghi, char f);
char					ft_count_lines_columns(char *name, int *linii,
	int *coloane, int *max_el);
t_coord					*click_aria_matrice_td(t_fdf *mlw, t_coord *aria);
void					alfa_calcul_arie(t_unghi *aria, double alfa);
void					beta_calcul_arie(t_unghi *aria, double beta);
void					gamma_calcul_arie(t_unghi *aria, double gamma);
void					unghiuri_matriciale(t_func *func, t_fdf *mlw,
	t_unghi *angle);
void					increment_unghi(double *angle, double *unghi);
double					radian_transform(double unghi);
void					radian_angle(t_unghi *angle, t_unghi *mlw_angle);
void					calcul_point_minus_angle(t_coord *aria,
	t_unghi *angle, double arc);
char					point_matrix_aria(t_fdf *mlw, t_coord *aria);
void					adaptare_coordonate_matrice(t_move *move,
	t_coord *aria);
int						distanta_doua_puncte(int xo, int yo, int xu, int yu);
int						ft_rotunjire(double nbr);
int						ft_atoi_limit(char *c, void *nbr);
char					calcul_verificare_point_matrix_aria(t_fdf *mlw);
int						my_key_name(int name, void *q);
int						mouse_motion(int x, int y, void *q);
int						my_loop_hook_fun(void *par);
int						mouse_pres(int k, void *q);
int						my_mouse_fun(int button, int x, int y, void *param);
int						my_key_fun(int keycode, void *param);
void					reprezentare_fdf(t_fdf *mlw, char f);
void					event_zoom_fdf(t_fdf *mlw, char zoom);
void					exit_fdf(t_fdf *mlw);
void					move_fdf(t_fdf *mlw, char move);
void					zero_zero_fdf(t_fdf *mlw);
void					mijloc_fdf(t_fdf *mlw);
int						ft_hex_converse(char *c, int *color);
int						conv_hex_int(char *c, char len);
void					conv_int_t_coord(t_coord *aria, int x, int y);
void					move_fdf(t_fdf *mlw, char move);
void					move_scale(t_fdf *mlw, t_coord *coord);
void					move_function_fdf(t_fdf *mlw);
void					move_frame_rotire_reinit(t_fdf *mlw);
void					move_scale_function(t_fdf *mlw);
void					line(t_coord *init, t_coord *final,
	t_coord *color, t_fdf *mlw);
void					circle(t_coord *coord, int r, int color, t_fdf *mlw);
void					line_line(t_fdf *mlw, t_coord *coord, char y, char x);
void					cre_line_point(t_fdf *mlw, t_coord *init,
	t_coord *final);
void					umplere(t_fdf *mlw, t_coord *xoxu, int y, int color);
void					new_frame(t_fdf *mlw, t_coord *init,
	t_coord *final, int color);
char					ascii(t_fdf *mlw, int c);
void					string_comand(t_fdf *mlw, char key);
void					string_put(t_fdf *mlw, char key);
void					new_frame(t_fdf *mlw, t_coord *init,
	t_coord *final, int color);
void					frame_dreptunghi(t_fdf *mlw);
void					frame_comand(t_fdf *mlw);
void					frame_backspace(t_fdf *mlw, char *key);
void					frame_delete_comand(t_fdf *mlw);
void					frame_line(t_fdf *mlw);
void					frame_comand_line(t_fdf *mlw);
void					frame_no_fdf_corp(t_fdf *mlw);
void					frame_nbr_limit(t_fdf *mlw);
void					button_unu(t_fdf *mlw, t_coord *coord);
void					button_doi(t_fdf *mlw, t_coord *coord);
void					button_trei(t_fdf *mlw, t_coord *coord);
void					button_patru(t_fdf *mlw, t_coord *coord);
void					button_cinci(t_fdf *mlw, t_coord *coord);
void					button_sase(t_fdf *mlw, t_coord *coord);
void					button_sapte(t_fdf *mlw, t_coord *coord);
void					inaltime_scale(t_fdf *mlw, t_coord *coord);
void					inaltime_function_fdf(t_fdf *mlw);
void					inaltime_scale_function(t_fdf *mlw);
void					color_scale(t_fdf *mlw, t_coord *coord);
void					color_function_fdf(t_fdf *mlw);
void					color_scale_function(t_fdf *mlw);
void					zoom_scale(t_fdf *mlw, t_coord *coord);
void					zoom_function_fdf(t_fdf *mlw);
void					zoom_scale_function(t_fdf *mlw);
void					comand_valid(t_fdf *mlw);
char					comand_verificare_fdf(t_fdf *mlw);
void					angle_function_fdf(t_fdf *mlw);
void					angle_scale_function(t_fdf *mlw);
void					create_function_fdf(t_fdf *mlw);
void					open_function_fdf(t_fdf *mlw);
void					scale_function_fdf(t_fdf *mlw);
char					standart_number(char *c, char *comand);
char					standart_dublu_nbr(char *c, t_coord *coord);
void					help_program_fdf(t_fdf *mlw);
void					constr_patrul(t_fdf *mlw, t_patr *patrul);
void					umplere_patru(t_fdf *mlw, t_coord *coord);
void					swap_mas_int(int *src, int *dest, unsigned char len);
char					coord_patrulater(t_coord *init, t_coord *final,
	int *par);
int						ft_scara_color(int max, int max_c, int min_c);
t_td_coord				**ft_memory_aloc_td(t_coord *len);
void					ft_fill_td(t_td_coord **td, char *line, t_coord *coord,
	int max);
int						ft_size(long long int n);
#endif
