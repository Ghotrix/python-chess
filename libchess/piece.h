#ifndef LIBCHESS_PIECE_H
#define LIBCHESS_PIECE_H

#include <iostream>

namespace chess {

/**
 * \brief An immutable chess piece.
 */
class Piece {
public:
    Piece();
    Piece(char symbol);
    Piece(const Piece& piece);

    char color() const;
    char type() const;
    char symbol() const;
    std::string full_color() const;
    std::string full_type() const;

    std::string __repr__() const;
    int __hash__() const;

    bool is_valid() const;

    Piece& operator=(const Piece& rhs);
    bool operator==(const Piece& rhs) const;
    bool operator!=(const Piece& rhs) const;

    static Piece from_color_and_type(char color, char type);

private:
    char m_symbol;
};

std::ostream& operator<<(std::ostream& out, const Piece& piece);

} // namespace chess

#endif // LIBCHESS_PIECE_H